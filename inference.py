# inference.py
from transformers import pipeline
import sys

def generate_response(prompt):
    generator = pipeline('text-generation', model='gpt2')
    response = generator(prompt, max_length=100, num_return_sequences=1)
    return response[0]['generated_text']

if __name__ == "__main__":
    prompt = sys.argv[1]
    response = generate_response(prompt)
    print(response)
